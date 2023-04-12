// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LobbyWidget.generated.h"

class UButton;

UCLASS()
class MAGICSURVIAL_API ULobbyWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	// 위젯 클래스의 생성자
	virtual void NativeOnInitialized();

private:
	class AMagicSurvivalGameMode* currentGameMode;

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* Btn_GameStart;
	UPROPERTY(meta = (BindWidget))
	UButton* Btn_QuitGame;

private:
	// 버튼을 눌렀을 때, 호출될 델리게이트에 등록할 함수
	UFUNCTION(BlueprintCallable)
	void Btn_GameStart_Callback();
	UFUNCTION(BlueprintCallable)
	void Btn_QuitGame_Callback();

private:
	void StartGame();
};
