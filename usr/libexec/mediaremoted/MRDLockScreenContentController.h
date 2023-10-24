//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MRDLockScreenContentControllerDelegate;

@interface MRDLockScreenContentController : NSObject
{
    _Bool _shouldConsiderSuggestions;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <MRDLockScreenContentControllerDelegate> _delegate;	// 16 = 0x10
    long long _suggestionCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000013224c
@property long long suggestionCount; // @synthesize suggestionCount=_suggestionCount;
@property(nonatomic) _Bool shouldConsiderSuggestions; // @synthesize shouldConsiderSuggestions=_shouldConsiderSuggestions;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(nonatomic) __weak id <MRDLockScreenContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool lockScreenPlatterHasContent;

@end
