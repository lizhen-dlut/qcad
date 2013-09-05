// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaAttributeDefinitionData.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaTextBasedData.h"
                 void REcmaAttributeDefinitionData::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RAttributeDefinitionData*) 0)));
        protoCreated = true;
    }

    
        // primary base class RTextBasedData:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RTextBasedData*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RTextBasedData
        REcmaHelper::registerFunction(&engine, proto, getRTextBasedData, "getRTextBasedData");
        
        // conversion for base class REntityData
        REcmaHelper::registerFunction(&engine, proto, getREntityData, "getREntityData");
        
        // conversion for base class RPainterPathSource
        REcmaHelper::registerFunction(&engine, proto, getRPainterPathSource, "getRPainterPathSource");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getDistanceTo, "getDistanceTo");
            
            REcmaHelper::registerFunction(&engine, proto, getTag, "getTag");
            
            REcmaHelper::registerFunction(&engine, proto, setTag, "setTag");
            
            REcmaHelper::registerFunction(&engine, proto, getPrompt, "getPrompt");
            
            REcmaHelper::registerFunction(&engine, proto, setPrompt, "setPrompt");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RAttributeDefinitionData*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RAttributeDefinitionData
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RAttributeDefinitionData",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaAttributeDefinitionData::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAttributeDefinitionData(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RAttributeDefinitionData
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RTextBasedData */
            
                && (
                
                        context->argument(
                        1
                        ).isString()
                ) /* type: QString */
            
                && (
                
                        context->argument(
                        2
                        ).isString()
                ) /* type: QString */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RTextBasedData*
                    ap0 =
                    qscriptvalue_cast<
                    RTextBasedData*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RAttributeDefinitionData: Argument 0 is not of type RTextBasedData.",
                               context);                    
                    }
                    RTextBasedData 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a2 =
                    (QString)
                    
                    context->argument( 2 ).
                    toString();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RAttributeDefinitionData
                    cppResult(
                    a0
        ,
    a1
        ,
    a2
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAttributeDefinitionData(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaAttributeDefinitionData::getRTextBasedData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RTextBasedData* cppResult =
                    qscriptvalue_cast<RAttributeDefinitionData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaAttributeDefinitionData::getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntityData* cppResult =
                    qscriptvalue_cast<RAttributeDefinitionData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaAttributeDefinitionData::getRPainterPathSource(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RPainterPathSource* cppResult =
                    qscriptvalue_cast<RAttributeDefinitionData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaAttributeDefinitionData::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RAttributeDefinitionData"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaAttributeDefinitionData::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RTextBasedData");
    
        list.append("REntityData");
    
        list.append("RPainterPathSource");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaAttributeDefinitionData::getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeDefinitionData::getDistanceTo", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeDefinitionData::getDistanceTo";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeDefinitionData* self = 
                        getSelf("getDistanceTo", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    4 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RAttributeDefinitionData: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    bool
                    a3 =
                    (bool)
                    
                    context->argument( 3 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'double'
    double cppResult =
        
               self->getDistanceTo(a0
        ,
    a1
        ,
    a2
        ,
    a3);
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeDefinitionData.getDistanceTo().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeDefinitionData::getDistanceTo", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeDefinitionData::getTag
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeDefinitionData::getTag", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeDefinitionData::getTag";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeDefinitionData* self = 
                        getSelf("getTag", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getTag();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeDefinitionData.getTag().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeDefinitionData::getTag", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeDefinitionData::setTag
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeDefinitionData::setTag", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeDefinitionData::setTag";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeDefinitionData* self = 
                        getSelf("setTag", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setTag(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeDefinitionData.setTag().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeDefinitionData::setTag", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeDefinitionData::getPrompt
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeDefinitionData::getPrompt", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeDefinitionData::getPrompt";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeDefinitionData* self = 
                        getSelf("getPrompt", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getPrompt();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeDefinitionData.getPrompt().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeDefinitionData::getPrompt", context, engine);
            return result;
        }
         QScriptValue
        REcmaAttributeDefinitionData::setPrompt
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAttributeDefinitionData::setPrompt", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAttributeDefinitionData::setPrompt";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAttributeDefinitionData* self = 
                        getSelf("setPrompt", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setPrompt(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAttributeDefinitionData.setPrompt().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAttributeDefinitionData::setPrompt", context, engine);
            return result;
        }
         QScriptValue REcmaAttributeDefinitionData::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RAttributeDefinitionData* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RAttributeDefinitionData(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaAttributeDefinitionData::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RAttributeDefinitionData cp = qscriptvalue_cast<RAttributeDefinitionData>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaAttributeDefinitionData::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RAttributeDefinitionData* self = getSelf("RAttributeDefinitionData", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RAttributeDefinitionData* REcmaAttributeDefinitionData::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RAttributeDefinitionData* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RAttributeDefinitionData >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RAttributeDefinitionData.%1(): "
                        "This object is not a RAttributeDefinitionData").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RAttributeDefinitionData* REcmaAttributeDefinitionData::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RAttributeDefinitionData* selfBase = getSelf(fName, context);
                RAttributeDefinitionData* self = dynamic_cast<RAttributeDefinitionData*>(selfBase);
                //return REcmaHelper::scriptValueTo<RAttributeDefinitionData >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RAttributeDefinitionData.%1(): "
                    "This object is not a RAttributeDefinitionData").arg(fName),
                    context);
            }

            return self;
            


        }
        