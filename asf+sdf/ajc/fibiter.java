private Data and$100(Data data, 
		     Bindings bindings) {
    return merge(bindings,
		 then$1001(data,bindings));
}
private Data then$1001000(Data data, 
			  Bindings bindings) {
    return create(a_data_item);
}
private Data then$100100(Data data, 
			 Bindings bindings) {
    return then$1001001(then$1001000(data,bindings),bindings);
}
private Data and$10010010(Data data, 
			  Bindings bindings) {
    return merge(a_data_item,
		 the(datasort-to-pattern(ds), data, bindings));
}
private Data then$1001001(Data data, 
			  Bindings bindings) {
    return giveBinding(and$10010010(data,bindings));
}
private Data and$10010(Data data, 
		       Bindings bindings) {
    return merge(then$100100(data,bindings),
		 then$100101(data,bindings));
}
private Data then$100101000(Data data, 
			    Bindings bindings) {
    return create(a_data_item);
}
private Data then$10010100(Data data, 
			   Bindings bindings) {
    return then$100101001(then$100101000(data,bindings),bindings);
}
private Data and$1001010010(Data data, 
			    Bindings bindings) {
    return merge(a_data_item,
		 the(datasort-to-pattern(ds), data, bindings));
}
private Data then$100101001(Data data, 
			    Bindings bindings) {
    return giveBinding(and$1001010010(data,bindings));
}
private Data and$1001010(Data data, 
			 Bindings bindings) {
    return merge(then$10010100(data,bindings),
		 then$10010101(data,bindings));
}
private Data then$10010101000(Data data, 
			      Bindings bindings) {
    return create(a_data_item);
}
private Data then$1001010100(Data data, 
			     Bindings bindings) {
    return then$10010101001(then$10010101000(data,bindings),bindings);
}
private Data and$100101010010(Data data, 
			      Bindings bindings) {
    return merge(a_data_item,
		 the(datasort-to-pattern(ds), data, bindings));
}
private Data then$10010101001(Data data, 
			      Bindings bindings) {
    return giveBinding(and$100101010010(data,bindings));
}
private Data and$100101010(Data data, 
			   Bindings bindings) {
    return merge(then$1001010100(data,bindings),
		 then$1001010101(data,bindings));
}
private Data then$10010101010(Data data, 
			      Bindings bindings) {
    return create(a_data_item);
}
private Data then$1001010101(Data data, 
			     Bindings bindings) {
    return then$10010101011(then$10010101010(data,bindings),bindings);
}
private Data and$100101010110(Data data, 
			      Bindings bindings) {
    return merge(a_data_item,
		 the(datasort-to-pattern(ds), data, bindings));
}
private Data then$10010101011(Data data, 
			      Bindings bindings) {
    return giveBinding(and$100101010110(data,bindings));
}
private Data then$10010101(Data data, 
			   Bindings bindings) {
    return giveDisjointUnion(and$100101010(data,bindings));
}
private Data then$100101(Data data, 
			 Bindings bindings) {
    return giveDisjointUnion(and$1001010(data,bindings));
}
private Data then$1001(Data data, 
		       Bindings bindings) {
    return giveDisjointUnion(and$10010(data,bindings));
}
private Data then$10(Data data, 
		     Bindings bindings) {
    return giveOverriding(and$100(data,bindings));
}
private Data hence$1(Data data, 
		     Bindings bindings) {
    Data result = then$10(data,bindings);
    if (hasType(result, Types.BINDINGS))
	return fa-to-expression(A2, data, result);
    throw new Exceptional(Empty.EMPTY);
}
private Data and$111000000(Data data, 
			   Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$11100000(Data data, 
			   Bindings bindings) {
    return giveBound(and$111000000(data,bindings));
}
private Data then$1110000(Data data, 
			  Bindings bindings) {
    return the(datasort-to-pattern(ds), then$11100000(data,bindings), bindings);
}
private Data then$111000(Data data, 
			 Bindings bindings) {
    return inspect(then$1110000(data,bindings));
}
private Data and$11100(Data data, 
		       Bindings bindings) {
    return merge(then$111000(data,bindings),
		 then$111001(data,bindings));
}
private Data and$111001000(Data data, 
			   Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$11100100(Data data, 
			   Bindings bindings) {
    return giveBound(and$111001000(data,bindings));
}
private Data then$1110010(Data data, 
			  Bindings bindings) {
    return the(datasort-to-pattern(ds), then$11100100(data,bindings), bindings);
}
private Data then$111001(Data data, 
			 Bindings bindings) {
    return inspect(then$1110010(data,bindings));
}
private Data then$1110(Data data, 
		       Bindings bindings) {
    return otherwise$11101(and$11100(data,bindings),bindings);
}
private Data then$111010000(Data data, 
			    Bindings bindings) {
    return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(1), data,bindings), bindings);
}
private Data and$11101000(Data data, 
			  Bindings bindings) {
    return merge(then$111010000(data,bindings),
		 then$111010001(data,bindings));
}
private Data then$111010001(Data data, 
			    Bindings bindings) {
    return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(2), data,bindings), bindings);
}
private Data then$1110100(Data data, 
			  Bindings bindings) {
    return and$11101001(and$11101000(data,bindings),bindings);
}
private Data exceptionally$111010010(Data data, 
				     Bindings bindings) {
    try {
        return checkLess(data);
    }
    catch (Exceptional e) {
        Data raised = e.getData();
        return fail();
    }
}
private Data and$11101001(Data data, 
			  Bindings bindings) {
    return merge(exceptionally$111010010(data,bindings),
		 data);
}
private Data then$111010(Data data, 
			 Bindings bindings) {
    return a_data_item;
}
private Data otherwise$11101(Data data, 
			     Bindings bindings) {
    try {
        return then$111010(data,bindings);
    }
    catch (Failed f) {
        return a_data_item;
    }
}
private Data unfold$111(Data data, 
			Bindings bindings) {
    return otherwise$1111(then$1110(data,bindings),bindings);
}
private Data then$1111000000(Data data, 
			     Bindings bindings) {
    return giveTupleToList(the(datasort-to-pattern(ds), data, bindings));
}
private Data and$111100000(Data data, 
			   Bindings bindings) {
    return merge(then$1111000000(data,bindings),
		 then$1111000001(data,bindings));
}
private Data then$1111000001(Data data, 
			     Bindings bindings) {
    return giveTupleToList(a_data_item);
}
private Data then$11110000(Data data, 
			   Bindings bindings) {
    return and$111100001(and$111100000(data,bindings),bindings);
}
private Data exceptionally$1111000010(Data data, 
				      Bindings bindings) {
    try {
        return checkEquals(data);
    }
    catch (Exceptional e) {
        Data raised = e.getData();
        return fail();
    }
}
private Data and$111100001(Data data, 
			   Bindings bindings) {
    return merge(exceptionally$1111000010(data,bindings),
		 data);
}
private Data then$1111000(Data data, 
			  Bindings bindings) {
    return andThen$11110001(then$11110000(data,bindings),bindings);
}
private Data and$1111000100000(Data data, 
			       Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$111100010000(Data data, 
			       Bindings bindings) {
    return giveBound(and$1111000100000(data,bindings));
}
private Data then$11110001000(Data data, 
			      Bindings bindings) {
    return the(datasort-to-pattern(ds), then$111100010000(data,bindings), bindings);
}
private Data and$1111000100(Data data, 
			    Bindings bindings) {
    return merge(then$11110001000(data,bindings),
		 then$11110001001(data,bindings));
}
private Data and$1111000100100000(Data data, 
				  Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$111100010010000(Data data, 
				  Bindings bindings) {
    return giveBound(and$1111000100100000(data,bindings));
}
private Data then$11110001001000(Data data, 
				 Bindings bindings) {
    return the(datasort-to-pattern(ds), then$111100010010000(data,bindings), bindings);
}
private Data then$1111000100100(Data data, 
				Bindings bindings) {
    return inspect(then$11110001001000(data,bindings));
}
private Data and$111100010010(Data data, 
			      Bindings bindings) {
    return merge(then$1111000100100(data,bindings),
		 then$1111000100101(data,bindings));
}
private Data and$1111000100101000(Data data, 
				  Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$111100010010100(Data data, 
				  Bindings bindings) {
    return giveBound(and$1111000100101000(data,bindings));
}
private Data then$11110001001010(Data data, 
				 Bindings bindings) {
    return the(datasort-to-pattern(ds), then$111100010010100(data,bindings), bindings);
}
private Data then$1111000100101(Data data, 
				Bindings bindings) {
    return inspect(then$11110001001010(data,bindings));
}
private Data then$11110001001(Data data, 
			      Bindings bindings) {
    return then$111100010011(and$111100010010(data,bindings),bindings);
}
private Data then$11110001001100(Data data, 
				 Bindings bindings) {
    return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(1), data,bindings), bindings);
}
private Data and$1111000100110(Data data, 
			       Bindings bindings) {
    return merge(then$11110001001100(data,bindings),
		 then$11110001001101(data,bindings));
}
private Data then$11110001001101(Data data, 
				 Bindings bindings) {
    return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(2), data,bindings), bindings);
}
private Data then$111100010011(Data data, 
			       Bindings bindings) {
    return givePlus(and$1111000100110(data,bindings));
}
private Data then$111100010(Data data, 
			    Bindings bindings) {
    return update(and$1111000100(data,bindings));
}
private Data andThen$11110001(Data data, 
			      Bindings bindings) {
    ATerm d1 = then$111100010(data,bindings);
    ATerm d2 = andThen$111100011(data,bindings);
    return merge(d1,d2);
}
private Data and$11110001100000(Data data, 
				Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$1111000110000(Data data, 
				Bindings bindings) {
    return giveBound(and$11110001100000(data,bindings));
}
private Data then$111100011000(Data data, 
			       Bindings bindings) {
    return the(datasort-to-pattern(ds), then$1111000110000(data,bindings), bindings);
}
private Data and$11110001100(Data data, 
			     Bindings bindings) {
    return merge(then$111100011000(data,bindings),
		 then$111100011001(data,bindings));
}
private Data and$11110001100100000(Data data, 
				   Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$1111000110010000(Data data, 
				   Bindings bindings) {
    return giveBound(and$11110001100100000(data,bindings));
}
private Data then$111100011001000(Data data, 
				  Bindings bindings) {
    return the(datasort-to-pattern(ds), then$1111000110010000(data,bindings), bindings);
}
private Data then$11110001100100(Data data, 
				 Bindings bindings) {
    return inspect(then$111100011001000(data,bindings));
}
private Data and$1111000110010(Data data, 
			       Bindings bindings) {
    return merge(then$11110001100100(data,bindings),
		 then$11110001100101(data,bindings));
}
private Data and$11110001100101000(Data data, 
				   Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$1111000110010100(Data data, 
				   Bindings bindings) {
    return giveBound(and$11110001100101000(data,bindings));
}
private Data then$111100011001010(Data data, 
				  Bindings bindings) {
    return the(datasort-to-pattern(ds), then$1111000110010100(data,bindings), bindings);
}
private Data then$11110001100101(Data data, 
				 Bindings bindings) {
    return inspect(then$111100011001010(data,bindings));
}
private Data then$111100011001(Data data, 
			       Bindings bindings) {
    return then$1111000110011(and$1111000110010(data,bindings),bindings);
}
private Data then$111100011001100(Data data, 
				  Bindings bindings) {
    return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(1), data,bindings), bindings);
}
private Data and$11110001100110(Data data, 
				Bindings bindings) {
    return merge(then$111100011001100(data,bindings),
		 then$111100011001101(data,bindings));
}
private Data then$111100011001101(Data data, 
				  Bindings bindings) {
    return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(2), data,bindings), bindings);
}
private Data then$1111000110011(Data data, 
				Bindings bindings) {
    return giveMinus(and$11110001100110(data,bindings));
}
private Data then$1111000110(Data data, 
			     Bindings bindings) {
    return update(and$11110001100(data,bindings));
}
private Data andThen$111100011(Data data, 
			       Bindings bindings) {
    ATerm d1 = then$1111000110(data,bindings);
    ATerm d2 = then$1111000111(data,bindings);
    return merge(d1,d2);
}
private Data and$11110001110000(Data data, 
				Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$1111000111000(Data data, 
				Bindings bindings) {
    return giveBound(and$11110001110000(data,bindings));
}
private Data then$111100011100(Data data, 
			       Bindings bindings) {
    return the(datasort-to-pattern(ds), then$1111000111000(data,bindings), bindings);
}
private Data and$11110001110(Data data, 
			     Bindings bindings) {
    return merge(then$111100011100(data,bindings),
		 then$111100011101(data,bindings));
}
private Data and$11110001110100000(Data data, 
				   Bindings bindings) {
    return merge(bindings,
		 a_data_item);
}
private Data then$1111000111010000(Data data, 
				   Bindings bindings) {
    return giveBound(and$11110001110100000(data,bindings));
}
private Data then$111100011101000(Data data, 
				  Bindings bindings) {
    return the(datasort-to-pattern(ds), then$1111000111010000(data,bindings), bindings);
}
private Data then$11110001110100(Data data, 
				 Bindings bindings) {
    return inspect(then$111100011101000(data,bindings));
}
private Data and$1111000111010(Data data, 
			       Bindings bindings) {
    return merge(then$11110001110100(data,bindings),
		 a_data_item);
}
private Data then$111100011101(Data data, 
			       Bindings bindings) {
    return then$1111000111011(and$1111000111010(data,bindings),bindings);
}
private Data then$111100011101100(Data data, 
				  Bindings bindings) {
    return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(1), data,bindings), bindings);
}
private Data and$11110001110110(Data data, 
				Bindings bindings) {
    return merge(then$111100011101100(data,bindings),
		 then$111100011101101(data,bindings));
}
private Data then$111100011101101(Data data, 
				  Bindings bindings) {
    return the(datasort-to-pattern(ds), eltAt(int-to-integerliteral(2), data,bindings), bindings);
}
private Data then$1111000111011(Data data, 
				Bindings bindings) {
    return givePlus(and$11110001110110(data,bindings));
}
private Data then$1111000111(Data data, 
			     Bindings bindings) {
    return update(and$11110001110(data,bindings));
}
private Data andThen$111100(Data data, 
			    Bindings bindings) {
    ATerm d1 = then$1111000(data,bindings);
    ATerm d2 = unfold$111(data,bindings);
    return merge(d1,d2);
}
private Data otherwise$11110(Data data, 
			     Bindings bindings) {
    try {
        return andThen$111100(data,bindings);
    }
    catch (Failed f) {
        return action$111101(data,bindings);
    }
}
private Data then$111101000(Data data, 
			    Bindings bindings) {
    return giveTupleToList(the(datasort-to-pattern(ds), data, bindings));
}
private Data and$11110100(Data data, 
			  Bindings bindings) {
    return merge(then$111101000(data,bindings),
		 then$111101001(data,bindings));
}
private Data then$111101001(Data data, 
			    Bindings bindings) {
    return giveTupleToList(a_data_item);
}
private Data then$1111010(Data data, 
			  Bindings bindings) {
    return and$11110101(and$11110100(data,bindings),bindings);
}
private Data exceptionally$111101010(Data data, 
				     Bindings bindings) {
    try {
        return checkEquals(data);
    }
    catch (Exceptional e) {
        Data raised = e.getData();
        return fail();
    }
}
private Data and$11110101(Data data, 
			  Bindings bindings) {
    return merge(exceptionally$111101010(data,bindings),
		 data);
}
private Data then$111101(Data data, 
			 Bindings bindings) {
    return action$1111011(then$1111010(data,bindings),bindings);
}
private Data otherwise$1111(Data data, 
			    Bindings bindings) {
    try {
        return action$11110(data,bindings);
    }
    catch (Failed f) {
        return then$11111(data,bindings);
    }
}
private Data then$11111(Data data, 
			Bindings bindings) {
    return raise(action$111110(data,bindings));
}
private Data unfolding$110(Data data, 
			   Bindings bindings) {
    return unfold$111(data,bindings);
}
private Data exceptionally$11(Data data, 
			      Bindings bindings) {
    try {
        return unfolding$110(data,bindings);
    }
    catch (Exceptional e) {
        Data raised = e.getData();
        return otherwise$111(raised,bindings);
    }
}
private Data then$1110000(Data data, 
			  Bindings bindings) {
    return giveTupleToList(the(datasort-to-pattern(ds), data, bindings));
}
private Data and$111000(Data data, 
			Bindings bindings) {
    return merge(then$1110000(data,bindings),
		 then$1110001(data,bindings));
}
private Data then$1110001(Data data, 
			  Bindings bindings) {
    return giveTupleToList(a_data_item);
}
private Data then$11100(Data data, 
			Bindings bindings) {
    return and$111001(and$111000(data,bindings),bindings);
}
private Data exceptionally$1110010(Data data, 
				   Bindings bindings) {
    try {
        return checkEquals(data);
    }
    catch (Exceptional e) {
        Data raised = e.getData();
        return fail();
    }
}
private Data and$111001(Data data, 
			Bindings bindings) {
    return merge(exceptionally$1110010(data,bindings),
		 data);
}
private Data then$1110(Data data, 
		       Bindings bindings) {
    return action$11101(then$11100(data,bindings),bindings);
}
private Data otherwise$111(Data data, 
			   Bindings bindings) {
    try {
        return then$1110(data,bindings);
    }
    catch (Failed f) {
        return raise(data);
    }
}
