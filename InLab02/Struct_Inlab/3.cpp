SCP* cloneSCP(SCP* original) {
    SCP* clone = new SCP();

    
    clone->id = original->id;
    clone->objClass = original->objClass;

    
    clone->speConProcedures = original->speConProcedures;
    clone->description = original->description;

        clone->numAddendums = original->numAddendums;
    clone->addendums = new string[clone->numAddendums];
    for (int i = 0; i < clone->numAddendums; i++) {
        clone->addendums[i] = original->addendums[i];
    }

    return clone;
}