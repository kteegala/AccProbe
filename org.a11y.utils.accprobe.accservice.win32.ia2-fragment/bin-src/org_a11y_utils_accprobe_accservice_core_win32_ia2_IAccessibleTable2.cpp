/* DO NOT EDIT THIS FILE - it is machine generated */
#include "org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2.h"

IAccessibleTable2* GetRef( JNIEnv *env, jobject jca){
    jclass cls = env->GetObjectClass(jca);
    jmethodID methID = env->GetMethodID(cls, "internalRef", "()I");
    return (IAccessibleTable2*) env->CallIntMethod(jca, methID);
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetCellAt
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetCellAt
(JNIEnv * env, jobject jca, jint row, jint col){
	IAccessibleTable2* ptr = GetRef(env,jca);
	IUnknown* iUnk = NULL;
	IAccessible2* iacc2 =NULL;
	HRESULT hr = ptr->get_cellAt(row, col, &iUnk);
	if(hr!=S_OK){
		putErrorCode(_T("cellAt"), CAccessible::getHRESULTString(hr), env, jca);
	}
	if(SUCCEEDED(hr) && iUnk){
		iacc2 = CAccessible2::getIA2FromIUnk(iUnk);
		return (int) new CAccessible2(iacc2);
	}
	return 0;
}



/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetCaption
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetCaption
(JNIEnv *env, jobject jca){
	IAccessibleTable2* ptr = GetRef(env,jca);
	BSTR str;
	IUnknown* iUnk = NULL;
	HRESULT hr = ptr->get_caption(&iUnk);
	if(hr!=S_OK){
		putErrorCode(_T("caption"), CAccessible::getHRESULTString(hr), env, jca);
	}
	IAccessible2* iacc2 =NULL;
	if(SUCCEEDED(hr) && iUnk){
		iacc2 = CAccessible2::getIA2FromIUnk(iUnk);
		if(iacc2)
			return (int) new CAccessible2(iacc2);
	}
	return 0;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetColumnDescription
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetColumnDescription
(JNIEnv * env, jobject jca, jlong col){
	IAccessibleTable2* ptr = GetRef(env,jca);
	BSTR str;
	
	HRESULT hr =ptr->get_columnDescription(col, &str);
	if(hr!=S_OK){
		putErrorCode(_T("columnDescription"), CAccessible::getHRESULTString(hr), env, jca);
	}

	return CreateString(env, CComBSTR(str));

}


/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetNColumns
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetNColumns
(JNIEnv * env, jobject jca){
	IAccessibleTable2* ptr = GetRef(env,jca);
	BSTR str;
	long colCt =0;
	HRESULT hr = ptr->get_nColumns(&colCt);
	if(hr!=S_OK){
		putErrorCode(_T("nColumns"), CAccessible::getHRESULTString(hr), env, jca);
	}

	return colCt;
	
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetNRows
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetNRows
(JNIEnv * env, jobject jca){
	IAccessibleTable2* ptr = GetRef(env,jca);
	BSTR str;
	long rowCt =0;
	HRESULT hr =ptr->get_nRows(&rowCt);
	if(hr!=S_OK){
		putErrorCode(_T("nRows"), CAccessible::getHRESULTString(hr), env, jca);
	}

	return rowCt;

}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetNSelectedCells
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetNSelectedCells
 (JNIEnv * env, jobject jca) { 	 
	 IAccessibleTable2* ptr = GetRef(env,jca);
	 long childCt =0;
	 HRESULT hr = ptr->get_nSelectedCells(&childCt);
	if(hr!=S_OK){
		putErrorCode(_T("nSelectedCells"), CAccessible::getHRESULTString(hr), env, jca);
	}
	 return (int)childCt;
}


/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetNSelectedColumns
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetNSelectedColumns
 (JNIEnv * env, jobject jca) { 	 
	 IAccessibleTable2* ptr = GetRef(env,jca);
	 long colCt =0;
	 HRESULT hr = ptr->get_nSelectedColumns(&colCt);
	if(hr!=S_OK){
		putErrorCode(_T("nSelectedColumns"), CAccessible::getHRESULTString(hr), env, jca);
	}
	 return (int)colCt;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetNSelectedRows
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetNSelectedRows
 (JNIEnv * env, jobject jca) { 	 
	 IAccessibleTable2* ptr = GetRef(env,jca);
	 long rowCt =0;
	 HRESULT hr = ptr->get_nSelectedRows(&rowCt);
	if(hr!=S_OK){
		putErrorCode(_T("nSelectedRows"), CAccessible::getHRESULTString(hr), env, jca);
	}
	 return (int)rowCt;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetRowDescription
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetRowDescription
(JNIEnv * env, jobject jca, jlong row){

	IAccessibleTable2* ptr = GetRef(env,jca);
	BSTR str;
	HRESULT hr = ptr->get_rowDescription(row, &str);
	if(hr!=S_OK){
		putErrorCode(_T("rowDescription"), CAccessible::getHRESULTString(hr), env, jca);
	}
	return CreateString(env, CComBSTR(str));
}


/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetSelectedCells
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetSelectedCells
(JNIEnv * env, jobject jca){
	IAccessibleTable2* ptr = GetRef(env,jca);
	long size =0;
	IUnknown** cells=0;
	long maxChildren = 0;
	jintArray childArray = NULL;
	HRESULT hr = ptr->get_nSelectedCells(&maxChildren);
	if(!SUCCEEDED(hr)){
		return 0;
	}
	hr = ptr->get_selectedCells(&cells,&size);
	if(hr!=S_OK){
		putErrorCode(_T("selectedCells"), CAccessible::getHRESULTString(hr), env, jca);
	}else if (size >0){
		childArray = env->NewIntArray( SUCCEEDED(hr) ? size : 0);
		jint* elements = new jint[size];
		for (int i=0; i <size; i++){
				IAccessible2* iAcc = CAccessible2::getIA2FromIUnk(cells[i]);
				elements[i] = (int)new CAccessible2(iAcc);
		}
		env->SetIntArrayRegion(childArray,0,size,elements);
	}
	CoTaskMemFree((LPVOID)cells);
	return childArray;
	
}


/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetSelectedColumns
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetSelectedColumns
(JNIEnv * env, jobject jca){
	IAccessibleTable2* ptr = GetRef(env,jca);
	long size =0;
	long *colArr=0;
	jintArray cols = NULL;
	HRESULT hr = ptr->get_selectedColumns(&colArr,&size);
	if(hr!=S_OK){
		putErrorCode(_T("selectedColumns"), CAccessible::getHRESULTString(hr), env, jca);
	}else if (size >0){
		cols = env->NewIntArray( SUCCEEDED(hr) ? size : 0);
		jint* elements = new jint[size];
			for (int i=0; i <size; i++){
					elements[i] = colArr[i];
			}
			env->SetIntArrayRegion(cols,0,size,elements);
	}
	return cols;
	
}
/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetSelectedRows
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetSelectedRows
(JNIEnv * env, jobject jca){
	IAccessibleTable2* ptr = GetRef(env,jca);
	long size =0;
	long *rowArr=0;
	jintArray rows = NULL;
	HRESULT hr = ptr->get_selectedRows(&rowArr,&size);
	if(hr!=S_OK){
		putErrorCode(_T("selectedRows"), CAccessible::getHRESULTString(hr), env, jca);
	}else if (size >0){
		rows = env->NewIntArray( SUCCEEDED(hr) ? size : 0);
		jint* elements = new jint[size];
			for (int i=0; i <size; i++){
					elements[i] = rowArr[i];
			}
			env->SetIntArrayRegion(rows,0,size,elements);
	}
	return rows;

}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetSummary
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetSummary
(JNIEnv * env, jobject jca){
	IAccessibleTable2* ptr = GetRef(env,jca);
	BSTR str;
	IUnknown* iUnk=NULL;
	IAccessible2* iacc2 =NULL;
	HRESULT hr = ptr->get_summary(&iUnk);
	if(hr!=S_OK){
		putErrorCode(_T("summary"), CAccessible::getHRESULTString(hr), env, jca);
	}
	if(SUCCEEDED(hr) && iUnk){
		iacc2 = CAccessible2::getIA2FromIUnk(iUnk);
		if(iacc2)
			return (int) new CAccessible2(iacc2);
	}
	return (jint)iacc2;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalIsColumnSelected
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalIsColumnSelected
 (JNIEnv * env, jobject jca, jint col) { 
	IAccessibleTable2* ptr = GetRef(env,jca);
	boolean isSel = false;
	HRESULT hr = ptr->get_isColumnSelected(col, &isSel);
	if(hr!=S_OK){
		putErrorCode(_T("isColumnSelected"), CAccessible::getHRESULTString(hr), env, jca);
	}
	return isSel;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalIsRowSelected
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalIsRowSelected
 (JNIEnv * env, jobject jca, jint row) { 	
	IAccessibleTable2* ptr = GetRef(env,jca);
	boolean isSel = false;
	HRESULT hr = ptr->get_isRowSelected(row, &isSel);
	if(hr!=S_OK){
		putErrorCode(_T("isRowSelected"), CAccessible::getHRESULTString(hr), env, jca);
	}
	return isSel;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalSelectColumn
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalSelectColumn
 (JNIEnv * env, jobject jca, jint col) { 
	IAccessibleTable2* ptr = GetRef(env,jca);
	HRESULT hr = ptr->selectColumn(col);
	if(hr!=S_OK){
		putErrorCode(_T("selectColumn"), CAccessible::getHRESULTString(hr), env, jca);
	}
	if(SUCCEEDED(hr))
	{
		return true;
	}
	return false;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalSelectRow
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalSelectRow
 (JNIEnv * env, jobject jca, jint row) { 
	IAccessibleTable2* ptr = GetRef(env,jca);
	HRESULT hr = ptr->selectRow(row);
	if(hr!=S_OK){
		putErrorCode(_T("selectRow"), CAccessible::getHRESULTString(hr), env, jca);
	}
	else
	{
		return true;
	}
	return false;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalUnselectColumn
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalUnselectColumn
 (JNIEnv * env, jobject jca, jint col) {
	IAccessibleTable2* ptr = GetRef(env,jca);
	HRESULT hr = ptr->unselectColumn(col);
	if(hr!=S_OK){
		putErrorCode(_T("unselectColumn"), CAccessible::getHRESULTString(hr), env, jca);
	}
	else
	{
		return true;
	}
	return false;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalUnselectRow
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalUnselectRow
 (JNIEnv * env, jobject jca, jint row)  { 
	IAccessibleTable2* ptr = GetRef(env,jca);
	HRESULT hr = ptr->unselectRow(row);
	if(hr!=S_OK){
		putErrorCode(_T("unselectRow"), CAccessible::getHRESULTString(hr), env, jca);
	}else
	{
		return true;
	}
	return false;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2
 * Method:    internalGetModelChange
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IAccessibleTable2_internalGetModelChange
 (JNIEnv * env, jobject jca) { 	
	IAccessibleTable2* ptr = GetRef(env,jca);
	jintArray jarray = NULL;
	IA2TableModelChange modChange;
	HRESULT hr = ptr->get_modelChange(&modChange);
	if(hr!=S_OK){
		putErrorCode(_T("modelChange"), CAccessible::getHRESULTString(hr), env, jca);
	}
	else{
		jarray = env->NewIntArray(5);
		jint* elements = new jint[5];
		elements[0] = (int) modChange.type;
		elements[1] = modChange.firstRow;
		elements[2] = modChange.lastRow;
		elements[3] = modChange.firstColumn;
		elements[4]=  modChange.lastColumn;
		env->SetIntArrayRegion(jarray,0,5,elements);
		
	}
	return jarray;
}
