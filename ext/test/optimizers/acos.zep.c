
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "math.h"
#include "kernel/operators.h"
#include "kernel/math.h"


ZEPHIR_INIT_CLASS(Test_Optimizers_ACos) {

	ZEPHIR_REGISTER_CLASS(Test\\Optimizers, ACos, test, optimizers_acos, test_optimizers_acos_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Test_Optimizers_ACos, testInt) {

	zval *_0;
	int a = 1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	ZVAL_LONG(_0, a);
	RETURN_MM_DOUBLE(acos(a));

}

PHP_METHOD(Test_Optimizers_ACos, testVar) {

	zval *_0;
	int a = 1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	ZVAL_LONG(_0, a);
	RETURN_MM_DOUBLE(acos(a));

}

PHP_METHOD(Test_Optimizers_ACos, testIntValue1) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	ZVAL_LONG(_0, 0);
	RETURN_MM_DOUBLE(acos(0));

}

PHP_METHOD(Test_Optimizers_ACos, testIntParameter) {

	zval *a_param = NULL, *_0;
	int a;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &a_param);

	a = zephir_get_intval(a_param);


	ZEPHIR_INIT_VAR(_0);
	ZVAL_LONG(_0, a);
	RETURN_MM_DOUBLE(acos(a));

}

PHP_METHOD(Test_Optimizers_ACos, testVarParameter) {

	zval *a;

	zephir_fetch_params(0, 1, 0, &a);



	RETURN_DOUBLE(zephir_acos(a TSRMLS_CC));

}

