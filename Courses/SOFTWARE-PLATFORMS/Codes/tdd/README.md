# TASK

The task we are going to address is to write a Java program to parse an HTTP query string.

In the URL below

```https://example.com/path/to/page?name=ferret&color=purple```

the query string is

```name=ferret&color=purple```

Our objective is to populate a map with the following key-value pairs:

```name->ferret```

```color->purple```

Even if there are a lot of libraries that allow us to do that, we are going to write our own Java program.

The example is from "The Art of Agile Development" by James Shore and Shane Warden.

A Java package from each increment has been created.

Increments:

1. one name-value pair
2. handling empty string
3. empty null
4. valueFor()
5. handling multiple name-value pairs 
6. multiple count()