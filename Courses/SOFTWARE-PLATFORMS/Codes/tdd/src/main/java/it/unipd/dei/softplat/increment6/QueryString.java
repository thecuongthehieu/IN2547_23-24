package it.unipd.dei.softplat.increment6;

import java.util.HashMap;
import java.util.Map;

public class QueryString {

    private String _query;

    public QueryString(String queryString) {
        if (queryString == null) throw new NullPointerException();
        this._query = queryString;
    }

    public int count() {
//        if ("".equals(_query)) {
//            return 0;
//        } else {
//            return 1;
//        }
        if ("".equals(_query)) return 0;
        String[] pairs = _query.split("&");
        return pairs.length;
    }

    public String valueFor(String name) {
//        return _query.split("=")[1]; // red bar

//        String[] pairs = _query.split("&");
//        for (String pair : pairs) {
//            String[] nameAndValue = pair.split("=");
//            if (nameAndValue[0].equals(name)) return nameAndValue[1];
//        }
//        throw new RuntimeException(name + "not found");

        Map<String, String> map = new HashMap<>();
        String[] pairs = _query.split("&");
        for (String pair : pairs) {
            String[] nameAndValue = pair.split("=");
            map.put(nameAndValue[0], nameAndValue[1]);
        }
        return map.get(name);

        // rewrite this class in order to avoid to parse the query string during every call to valueFor()

    }

}
