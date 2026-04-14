// Character 클래스 헤더 파일 예시
protected:
    // Enhanced Input Action 에셋을 연결할 변수
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    class UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    class UInputAction* LookAction;

    // 이동 함수 선언
    void Move(const struct FInputActionValue& Value);
    void Look(const struct FInputActionValue& Value);