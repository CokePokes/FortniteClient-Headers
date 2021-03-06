//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBNCardHeroConfiguration, UILabel;

@interface FBNCardHeroView : UIView
{
    FBNCardHeroConfiguration *_configuration;
    double _contentInset;
    UIView *_backgroundView;
    UILabel *_textLabel;
}

@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) double contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) FBNCardHeroConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithConfiguration:(id)arg1 assetsController:(id)arg2 contentInset:(double)arg3;

@end

