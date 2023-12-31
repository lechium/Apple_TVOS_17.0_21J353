//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PBCoordinatedTransitionToken;
@protocol OS_os_log, PBSystemOverlayUIProvider;

@interface PBSystemOverlayPresentationRequest : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _animated;	// 16 = 0x10
    _Bool _insertAtFrontOfQueue;	// 17 = 0x11
    id <PBSystemOverlayUIProvider> _provider;	// 24 = 0x18
    NSDictionary *_clientOptions;	// 32 = 0x20
    unsigned long long _sceneDeactivationReasons;	// 40 = 0x28
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 48 = 0x30
    NSObject<OS_os_log> *_signpostLog;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000ed78d
@property(readonly, nonatomic) NSObject<OS_os_log> *signpostLog; // @synthesize signpostLog=_signpostLog;
- (_Bool)_insertAtFrontOfQueue;	// IMP=0x00100000000ed77a
@property(readonly, nonatomic) __weak PBCoordinatedTransitionToken *coordinatedTransitionToken;
@property(readonly, nonatomic) unsigned long long sceneDeactivationReasons;
@property(readonly, copy, nonatomic) NSDictionary *clientOptions;
@property(readonly, nonatomic) id <PBSystemOverlayUIProvider> provider;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ed6fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ed6f0
- (id)initWithRequest:(id)arg1;	// IMP=0x00100000000ed57e

@end

