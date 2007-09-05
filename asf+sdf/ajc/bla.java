import acj.*;
import acj.data.*;
import acj.data.action.*;

public class Factorial extends AbstractAction {
	public static void main(String args[]) 
			throws Exceptional, Failed {
		Enactable e = new Factorial();
		Store.initStore();
		Data d = e.enact(Empty.EMPTY, new Bindings());
		System.out.println(Store.getStore());
	}

	public Data enact(Data data, Bindings bindings)
			throws Exceptional, Failed {
		return ((new AndThen((new Hence((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return mergeData(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("unf");
		}
	})).enact(data,bindings),
		 ((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Then((new Then((new And((new Then((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().inspect((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Int(0);
		}
	})))),(new Otherwise((new Then((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(1));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))))),(new And((new AndThen(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data.getElt(1)).greater((Int)data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Failed();
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bool(true);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bool(false);
		}
	})))))),(new Otherwise(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			try {
	return mergeData((new Then((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bool(true);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),(new And((new AndThen(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data.getElt(1)).equals((Data)data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Failed();
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),(new AndThen((new Then((new And((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("y");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),(new Then((new And((new Then((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("y");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().inspect((Cell)data);
		}
	})))),(new Then((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().inspect((Cell)data);
		}
	})))))),(new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(1));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data.getElt(1)).times((Int)data.getElt(2));
		}
	})))))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().update((Cell)(data.getElt(1)),
	(Storable)(data.getElt(2)));
		}
	})))),(new Then((new And((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),(new Then((new And((new Then((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().inspect((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Int(1);
		}
	})))),(new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(1));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data.getElt(1)).minus((Int)data.getElt(2));
		}
	})))))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().update((Cell)(data.getElt(1)),
	(Storable)(data.getElt(2)));
		}
	})))))))).enact(data,bindings),
		 (new Then((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data).provide();
		}
	})))),(new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data).provide();
		}
	})))),(new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("unf");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Enactable)data);
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Enactable)(data.getElt(1))).hence((Enactable)(data.getElt(2)));
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Enactable)(data.getElt(1))).then((Enactable)(data.getElt(2)));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Enactable)data).enact(Empty.EMPTY, new Bindings());
		}
	})))).enact(data,bindings));
}
catch (Failed f) {
	return ((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Empty.EMPTY;
		}
	})).enact((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bool(false);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),(new And((new AndThen(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data.getElt(1)).equals((Data)data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Failed();
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))).enact(data,bindings),bindings);;
}


		}
	})),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Empty.EMPTY;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Exceptional(data);
		}
	})))))));
		}
	})).enact(data,bindings));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bindings((Token)data.getElt(1), (Bindable)data.getElt(2));
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).override((Bindings)data.getElt(2));
		}
	})))),(new Then((new Then((new And((new Then((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().inspect((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Int(0);
		}
	})))),(new Otherwise((new Then((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(1));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))))),(new And((new AndThen(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data.getElt(1)).greater((Int)data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Failed();
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bool(true);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bool(false);
		}
	})))))),(new Otherwise(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			try {
	return mergeData((new Then((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bool(true);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),(new And((new AndThen(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data.getElt(1)).equals((Data)data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Failed();
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),(new AndThen((new Then((new And((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("y");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),(new Then((new And((new Then((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("y");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().inspect((Cell)data);
		}
	})))),(new Then((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().inspect((Cell)data);
		}
	})))))),(new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(1));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data.getElt(1)).times((Int)data.getElt(2));
		}
	})))))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().update((Cell)(data.getElt(1)),
	(Storable)(data.getElt(2)));
		}
	})))),(new Then((new And((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),(new Then((new And((new Then((new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().inspect((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Int(1);
		}
	})))),(new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(1));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return (data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data);
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Int)data.getElt(1)).minus((Int)data.getElt(2));
		}
	})))))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().update((Cell)(data.getElt(1)),
	(Storable)(data.getElt(2)));
		}
	})))))))).enact(data,bindings),
		 (new Then((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data).provide();
		}
	})))),(new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data).provide();
		}
	})))),(new Then((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("unf");
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).bound((Token)data.getElt(2));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Enactable)data);
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Enactable)(data.getElt(1))).hence((Enactable)(data.getElt(2)));
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Enactable)(data.getElt(1))).then((Enactable)(data.getElt(2)));
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Enactable)data).enact(Empty.EMPTY, new Bindings());
		}
	})))).enact(data,bindings));
}
catch (Failed f) {
	return ((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Empty.EMPTY;
		}
	})).enact((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bool(false);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),(new And((new AndThen(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data.getElt(1)).equals((Data)data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Failed();
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))).enact(data,bindings),bindings);;
}


		}
	})),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Empty.EMPTY;
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Exceptional(data);
		}
	})))))))))),(new Otherwise((new Then((new Then((new And((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))),(new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("break");
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),(new And((new AndThen(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Data)data.getElt(1)).equals((Data)data.getElt(2));
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Failed();
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return data;
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Empty.EMPTY;
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			throw new Exceptional(data);
		}
	}))))))).enact(data, 
(Bindings)(((new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return bindings;
		}
	})),(new Then((new And((new Then((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Int(4);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().create((Storable)data);
		}
	})))),(new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("x");
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bindings((Token)data.getElt(1), (Bindable)data.getElt(2));
		}
	})))))),(new Then((new Then(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Int(1);
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return Store.getStore().create((Storable)data);
		}
	})))),(new Then((new And(((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Token("y");
		}
	})),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Cell)data);
		}
	})))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return new Bindings((Token)data.getElt(1), (Bindable)data.getElt(2));
		}
	})))))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).disjointUnion((Bindings)data.getElt(2));
		}
	})))))),((new AbstractAction() {
		public Data enact(Data data, Bindings bindings)
				throws Exceptional, Failed {
			return ((Bindings)data.getElt(1)).override((Bindings)data.getElt(2));
		}
	}))))).enact(data,bindings)));;
	}
}