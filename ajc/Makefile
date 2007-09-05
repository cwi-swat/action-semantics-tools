
files=ajc/*.java ajc/data/*.java ajc/data/pure/*.java

all: jikes guavac guavac guavac_opt javac javac_opt 

jikes:
	jikes -d targets/jikes -classpath \
		.:/usr/local/jdk1.2.2/jre/lib/rt.jar $(files)


guavac:
	java.guavac -d targets/guavac -classpath \
		.:/usr/local/jdk1.2.2/jre/lib/rt.jar $(files)

guavac_opt:
	java.guavac -d targets/guavac -O4 -classpath \
		.:/usr/local/jdk1.2.2/jre/lib/rt.jar $(files)

javac:
	javac -d targets/javac $(files)

javac_opt:
	javac -d targets/javac_opt $(files) -O


# Gcj does not understand interface inheritance.
#gcj: 
#	gcj -d targets/gcj -c $(files)

# Manta does not support TreeMap
#manta:
#	mantac -c $(files)