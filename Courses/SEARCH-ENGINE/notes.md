## Lecture 01 (26/02/2024)
- Intermediate exam
- Tutor Senior
- Group, Homeworks
- CLEF

## Lecture 02 (28/02/2024)
- Search Engine
- Information Retrivial

## Lecture 03 (01/03/2024)
- Y architecture

## Lecture 04 (04/03/2024)
- Why is it called Inverted Index
	- The forward index stores a list of words for each document (docid to content)
	- https://en.wikipedia.org/wiki/Search_engine_indexing#The_forward_index

## Lecture 05 (06/03/2024)
- A/B testing drawback: Real users would experience the testing
- Multilangual corpus

## Lecture 06 (08/03/2024)
- **ABSENT (SICK)**

## Lecture 07 (11/03/2024)
- Apache Lucene
- hello-ir codes

## Lecture 08 (13/03/2024)
- hello-tipster codes
- TREC topics
- Hashtable is thread-safe, HashMap is not thread-safe
- Pattern, Reflection usages in `hello-tipster/src/main/java/it/unipd/dei/se/parse/DocumentParser.java`
- Iterator vs Iterable
	- https://www.baeldung.com/java-iterator-vs-iterable
- Close recourses patterns in `public final it.unipd.dei.se.parse.ParsedDocument next()`, which is similar to try-with-resources
	- https://docs.oracle.com/javase/specs/jls/se8/html/jls-14.html#jls-14.20.3
- RuntimeException extends Exception, but it is unchecked
	- https://stackoverflow.com/questions/10578043/how-a-compiler-identifies-that-there-is-a-checked-exception#:~:text=So%20basically%20it%20looks%20at,it%20is%20checked%20or%20unchecked.&text=All%20checked%20exceptions%20have%20a,exceptions%20extend%20RuntimeException%20or%20Error%20.
- Suppressed Exception
	- https://www.baeldung.com/java-suppressed-exceptions