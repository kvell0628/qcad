// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMASPLINEDATA_H
        #define RECMASPLINEDATA_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RSplineData.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSplineData {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendControlPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPeriodic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDegree
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPeriodic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTangentAtStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTangentAtEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getControlPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getControlPointsWrapped
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFitPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getKnotVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getActualKnotVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWeights
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toPolyline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        castToShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RSplineData* getSelf(const QString& fName, QScriptContext* context)
    ;static RSplineData* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    