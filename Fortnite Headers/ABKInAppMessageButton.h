//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIColor, UIFont;

@interface ABKInAppMessageButton : NSObject
{
    _Bool _buttonOpenUrlInWebView;
    NSString *_buttonText;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonTextColor;
    UIFont *_buttonTextFont;
    long long _buttonClickActionType;
    NSURL *_buttonClickedURI;
    long long _buttonID;
}

@property(readonly) long long buttonID; // @synthesize buttonID=_buttonID;
@property _Bool buttonOpenUrlInWebView; // @synthesize buttonOpenUrlInWebView=_buttonOpenUrlInWebView;
@property(readonly, copy) NSURL *buttonClickedURI; // @synthesize buttonClickedURI=_buttonClickedURI;
@property(readonly) long long buttonClickActionType; // @synthesize buttonClickActionType=_buttonClickActionType;
@property(copy) UIFont *buttonTextFont; // @synthesize buttonTextFont=_buttonTextFont;
@property(retain) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(copy) NSString *buttonText; // @synthesize buttonText=_buttonText;
- (void).cxx_destruct;
- (void)setButtonClickAction:(long long)arg1 withURI:(id)arg2;
- (id)proxyForJson;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
