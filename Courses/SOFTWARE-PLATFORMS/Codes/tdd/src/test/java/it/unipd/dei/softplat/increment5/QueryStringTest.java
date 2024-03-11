package it.unipd.dei.softplat.increment5;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

public class QueryStringTest {

    @Test
    public void testOneNameValuePair() {
        QueryString qs = new QueryString("name=value");
        assertEquals(1, qs.count());
        assertEquals("value", qs.valueFor("name"));
    }

    @Test
    public void testNoNameValuePair() {
        QueryString qs = new QueryString("");
        assertEquals(0, qs.count());
    }

    @Test
    public void testNull() {
        Exception exception = assertThrows(NullPointerException.class, () -> {
            QueryString qs = new QueryString(null);
        });
    }

    @Test
    public void testMultipleNameValuePairs() {
        QueryString query = new QueryString("name1=value1&name2=value2&name3=value3");
        assertEquals("value1", query.valueFor("name1"));
        assertEquals("value2", query.valueFor("name2"));
        assertEquals("value3", query.valueFor("name3"));
    }

}
