//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol AKProximityEngineController, OS_dispatch_queue;

@interface AKProximityPiggybackEngine : NSObject
{
    id <AKProximityEngineController> _controller;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_presenceSID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000068b1e
@property(readonly, nonatomic) NSUUID *presenceSID; // @synthesize presenceSID=_presenceSID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id);	// IMP=0x0010000000068af4
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
- (void)invalidate;	// IMP=0x0010000000068aa0
- (void)activate;	// IMP=0x0010000000068a54
- (void)prepareWithController:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000068a14
- (void)dealloc;	// IMP=0x001000000006899b
- (id)initWithPresenceSID:(id)arg1;	// IMP=0x0010000000068930

// Remaining properties
@property(readonly, nonatomic) __weak id <AKProximityEngineController> controller; // @synthesize controller=_controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

