package it.unipd.dei.softplat.increment2;

public class QueryString {

    private String _query;

    public QueryString(String queryString) {
        this._query = queryString;
    }

    public int count() {
        if ("".equals(_query)) { // (green bar)
            return 0;
        } else {
            return 1;
        }
    }

}
