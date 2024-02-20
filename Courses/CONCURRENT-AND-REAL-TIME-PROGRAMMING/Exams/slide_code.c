







typedef struct {
    // thread-safe
    pthread_mutex_t mutex;
    double interval;
    usec_t next_free;

} RateLimiter;

/* Claim next permits */
usec_t claim_next(RateLimiter *rate_limiter, int permits);

/* Claim next permits and then usleep if not permited */
usec_t acquire_permits(RateLimiter *rate_limiter, int permits);

/* Acquire only one permit and then usleep if not permited */
usec_t acquire(RateLimiter *rate_limiter);

/* Change the limiting rate */
void set_rate(RateLimiter *rate_limiter, double rate);

double get_rate(RateLimiter *rate_limiter);
RateLimiter *get_rate_limiter(double rate);






/* Test timing when acquire only one permit */
void test_acquire();

/* Test timing when acquire multiple permits */
void test_acquire_permits();

/* Test tinming when changing to new rate value */
void test_rate_change();


@Test
public void testAcquire();

@Test
public void testAcquirePermits();

@Test
public void testRateChange();



/* Producer code. Passed argument is not used */
static void *producer(void *arg)
{
    int item = 0;
    while (1)
    {
        /* Wait for availability of at least one empty slot */
        sem_wait(room_vailable_sem);

        /* Limit rate */
        acquire(prod_rate_limiter);

        /* Enter critical section */
        sem_wait(mutex_sem);

        /* Write data item */
        buffer[writeIdx] = item;
        /* Update write index */
        writeIdx = (writeIdx + 1) % BUFFER_SIZE;

        /* Update metrics */
        prod_count += 1;
        queue_size += 1;

        /* Signal that a new data slot is available */
        sem_post(data_available_sem);
        
        /* Exit critical section */
        sem_post(mutex_sem);

        /* Produce data item and take actions (e.g return) */
    }
}



static void control_flow(int cur_queue_size) {
    double cur_prod_rate = get_rate(prod_rate_limiter);
    double cur_cons_rate = get_rate(cons_rate_limiter);
    double updated_prod_rate = cur_prod_rate;

    if (cur_queue_size > queue_size_threshold) {
        // decreasing rate of producer
        updated_prod_rate -= rate_change_step; // rate_change_step = 0.5

        // min rate = cur_cons_rate / 2
        if (updated_prod_rate < cur_cons_rate / 2) {
            updated_prod_rate = cur_cons_rate / 2;
        }
    } else {
        // increasing rate of producer
        updated_prod_rate += rate_change_step; // rate_change_step = 0.5

        // max rate = 2 * cons_rate
        if (updated_prod_rate > cur_cons_rate * 2) {
            updated_prod_rate = cur_cons_rate * 2;
        }
    }

    // update rate of producer
    set_rate(prod_rate_limiter, updated_prod_rate);
}


















