//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AKFImages : NSObject
{
}

+ (id)_templateImageWithSize:(struct CGSize)arg1 scale:(double)arg2 restrictToSquare:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
+ (id)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 restrictToSquare:(_Bool)arg3 opaque:(_Bool)arg4 backgroundColor:(id)arg5 foregroundColor:(id)arg6 block:(CDUnknownBlockType)arg7;
+ (void)_drawRingInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
+ (void)_drawInContext:(struct CGContext *)arg1 block:(CDUnknownBlockType)arg2;
+ (void)_drawCircleInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 lineWidth:(double)arg4 fillColor:(id)arg5;
+ (id)editImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)loadingImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)loadedImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)inputErrorImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)errorImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)emailImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (id)caretImageWithScale:(double)arg1;

@end
