//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VUINowPlayingWindowDelegate;

__attribute__((visibility("hidden")))
@interface VUINowPlayingWindowDelegateProvider : NSObject
{
    id <VUINowPlayingWindowDelegate> _delegate;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00100000001b7370
- (void).cxx_destruct;	// IMP=0x00000000001b7439
@property(nonatomic) __weak id <VUINowPlayingWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldNowPlayingWindowDismiss;	// IMP=0x00000000001b73d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
