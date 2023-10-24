//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIAvoidanceCoordinator : NSObject
{
    NSMutableDictionary *_blockades;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    int _recurseCount;	// 24 = 0x18
    struct CGRect _avoidanceFrame;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013c55f
@property(nonatomic) struct CGRect avoidanceFrame; // @synthesize avoidanceFrame=_avoidanceFrame;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000013c1e1
- (void)updateClients:(id)arg1;	// IMP=0x000000000013bc22
- (id)findBlockadesForName:(id)arg1;	// IMP=0x000000000013bab2
- (id)findClientsForBlockade:(id)arg1;	// IMP=0x000000000013b806
- (id)findNamesForBlockade:(id)arg1;	// IMP=0x000000000013b547
- (void)removeAvoidanceObject:(id)arg1;	// IMP=0x000000000013b334
- (void)addAvoidanceObject:(id)arg1;	// IMP=0x000000000013af96
- (void)setGroupOfBlockades:(id)arg1 forBlockadeIdentifier:(id)arg2;	// IMP=0x000000000013adff
- (void)dealloc;	// IMP=0x000000000013ad97
- (void)releaseAll:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x000000000013ab49
- (id)init;	// IMP=0x000000000013aaaf

@end

