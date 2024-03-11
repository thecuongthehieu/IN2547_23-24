package it.unipd.dei.softplat.increment1;

public class QueryString {

    private String _query;

    public QueryString(String queryString) {
        this._query = queryString;
    }

    public int count() {
//        return 0; // red bar
        return 1; // green bar
    }

}
