//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyInput-Protocol.h"
#import "UITextInput-Protocol.h"

@class EAGLContext, NSDictionary, NSString, UITextPosition, UITextRange, UITouch;
@protocol CAMetalDrawable, MTLDevice, UITextInputDelegate, UITextInputTokenizer;

@interface FIOSView : UIView <UIKeyInput, UITextInput>
{
    _Bool bIsInitialized;
    int NumActiveTouches;
    UITouch *AllTouches[10];
    EAGLContext *Context;
    unsigned int ResolveFrameBuffer;
    id <MTLDevice> MetalDevice;
    id <CAMetalDrawable> PanicDrawable;
    _Bool bIsUsingMetal;
    _Bool bIsUsingIntegratedKeyboard;
    _Bool bSendEscapeOnClose;
    NSString *CachedMarkedText;
    long long KeyboardType;
    long long AutocorrectionType;
    long long AutocapitalizationType;
    _Bool bSecureTextEntry;
    int KeyboardShowCount;
    unsigned int SwapCount;
    unsigned int OnScreenColorRenderBuffer;
    unsigned int OnScreenColorRenderBufferMSAA;
    NSDictionary *markedTextStyle;
}

+ (Class)layerClass;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle;
@property(nonatomic) unsigned int OnScreenColorRenderBufferMSAA; // @synthesize OnScreenColorRenderBufferMSAA;
@property(nonatomic) unsigned int OnScreenColorRenderBuffer; // @synthesize OnScreenColorRenderBuffer;
@property(nonatomic) unsigned int SwapCount; // @synthesize SwapCount;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=bSecureTextEntry;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=AutocapitalizationType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=AutocorrectionType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=KeyboardType;
- (void)InitKeyboard;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)DeactivateKeyboard;
- (void)ActivateKeyboard:(_Bool)arg1 keyboardConfig:(struct FKeyboardConfig)arg2;
- (void)ActivateKeyboard:(_Bool)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)canBecomeFirstResponder;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)HandleTouches:(id)arg1 ofType:(int)arg2;
- (int)GetTouchIndex:(id)arg1;
- (void)SwapBuffers;
- (void)UnmakeCurrent;
- (void)MakeCurrent;
- (void)DestroyFramebuffer;
- (id)MakeDrawable;
- (void)UpdateRenderWidth:(unsigned int)arg1 andHeight:(unsigned int)arg2;
- (void)layoutSubviews;
- (_Bool)CreateFramebuffer:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end

