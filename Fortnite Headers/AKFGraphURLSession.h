//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLSession;

@interface AKFGraphURLSession : NSObject
{
    NSURLSession *_session;
}

+ (id)_sessionConfigurationWithUserAgent:(id)arg1;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)startTaskForGraphRequest:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (id)startTaskForGraphRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserAgent:(id)arg1;

@end
