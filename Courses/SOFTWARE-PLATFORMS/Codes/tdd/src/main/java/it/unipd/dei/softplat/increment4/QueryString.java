package it.unipd.dei.softplat.increment4;

public class QueryString {

    private String _query;

    public QueryString(String queryString) {
        if (queryString == null) throw new NullPointerException();
        this._query = queryString;
    }

    public int count() {
        if ("".equals(_query)) { // (green bar)
            return 0;
        } else {
            return 1;
        }
    }

    public String valueFor(String name) {
        return _query.split("=")[1];
    }

}
