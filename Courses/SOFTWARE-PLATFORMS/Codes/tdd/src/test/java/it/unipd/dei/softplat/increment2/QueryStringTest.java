package it.unipd.dei.softplat.increment2;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class QueryStringTest {

    @Test
    public void testOneNameValuePair() {
        QueryString qs = new QueryString("name=value");
        assertEquals(1, qs.count());
    }

    @Test
    public void testNoNameValuePair() {
        QueryString qs = new QueryString("");
        assertEquals(0, qs.count());
    }

}
