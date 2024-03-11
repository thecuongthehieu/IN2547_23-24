package it.unipd.dei.softplat.increment5;

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
//        return _query.split("=")[1]; // red bar
        String[] pairs = _query.split("&");
        for (String pair : pairs) {
            String[] nameAndValue = pair.split("=");
            if (nameAndValue[0].equals(name)) return nameAndValue[1];
        }
        throw new RuntimeException(name + "not found");
    }

}
