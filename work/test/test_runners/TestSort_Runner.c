#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TesteSucesso_Couting);
  RUN_TEST_CASE(Sort, TesteSucesso_Radix);
  RUN_TEST_CASE(Sort, TesteSucesso_Bubble);
  RUN_TEST_CASE(Sort, TesteSucesso_Insertion);
  RUN_TEST_CASE(Sort, TesteSucesso_Selection);
  RUN_TEST_CASE(Sort, TesteSucesso_Heap);
  RUN_TEST_CASE(Sort, TesteSucesso_Merge);
  RUN_TEST_CASE(Sort, TesteSucesso_Quick);
  RUN_TEST_CASE(Sort, TesteVetor_TamanhoMinimo);
  RUN_TEST_CASE(Sort, TesteVetor_TamanhoMaximo);
  RUN_TEST_CASE(Sort, TesteVetor_TamanhoMinimoInvalido);
  RUN_TEST_CASE(Sort, TesteVetor_TamanhoMaximoInvalido);
  RUN_TEST_CASE(Sort, TesteVetor_ValoresRepetidos);
  RUN_TEST_CASE(Sort, TesteVetor_ValoresNegativos);
  RUN_TEST_CASE(Sort, TesteVetor_ValoresNegativosEPositivos);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnBubble);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnInsertion);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnSelection);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnHeap);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnMerge);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnQuick);
  RUN_TEST_CASE(Sort, TesteComplexidade_On2Counting);
  RUN_TEST_CASE(Sort, TesteComplexidade_On2Radix);
  RUN_TEST_CASE(Sort, TesteComplexidade_On2Heap);
  RUN_TEST_CASE(Sort, TesteComplexidade_On2Merge);
  RUN_TEST_CASE(Sort, TesteComplexidade_On2Quick);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnlognCounting);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnlognRadix);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnlognBubble);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnlognInsertion);
  RUN_TEST_CASE(Sort, TesteComplexidade_OnlognSelection);
  RUN_TEST_CASE(Sort, TesteComplexidade_CountingInvalida);
  RUN_TEST_CASE(Sort, TesteComplexidade_RadixInvalida);
  RUN_TEST_CASE(Sort, TesteComplexidade_BubbleInvalida);
  RUN_TEST_CASE(Sort, TesteComplexidade_InsertionInvalida);
  RUN_TEST_CASE(Sort, TesteComplexidade_SelectionInvalida);
  RUN_TEST_CASE(Sort, TesteComplexidade_HeapInvalida);
  RUN_TEST_CASE(Sort, TesteComplexidade_MergeInvalida);
  RUN_TEST_CASE(Sort, TesteComplexidade_QuickInvalida);
  RUN_TEST_CASE(Sort, TesteAlgoritmo_OnInvalido);
  RUN_TEST_CASE(Sort, TesteAlgoritmo_On2Invalido);
  RUN_TEST_CASE(Sort, TesteAlgoritmo_OnlognInvalido);
}