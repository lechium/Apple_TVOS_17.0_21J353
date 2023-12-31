//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol OS_nw_activity;

__attribute__((visibility("hidden")))
@interface HMDNetworkActivityWrapper : NSObject
{
    _Bool _completed;	// 8 = 0x8
    NSObject<OS_nw_activity> *_activity;	// 16 = 0x10
    HMDNetworkActivityWrapper *_parent;	// 24 = 0x18
    NSMutableSet *_mutableChildren;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b2b676
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) NSMutableSet *mutableChildren; // @synthesize mutableChildren=_mutableChildren;
@property(readonly, nonatomic) __weak HMDNetworkActivityWrapper *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSObject<OS_nw_activity> *activity; // @synthesize activity=_activity;
- (id)childActivityWithLabel:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000b2b476
- (void)submitMetrics:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000b2b363
- (void)completeWithSuccess:(_Bool)arg1;	// IMP=0x0000000000b2b318
- (void)setParent:(id)arg1;	// IMP=0x0000000000b2b24d
- (void)activate;	// IMP=0x0000000000b2b218
@property(readonly, nonatomic) NSSet *children;
@property(readonly, nonatomic) unsigned long long label;
@property(readonly, nonatomic) _Bool isActivated;
- (id)initWithLabel:(unsigned long long)arg1;	// IMP=0x0000000000b2b0dd

@end

