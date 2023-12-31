//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MKPriorityToIndexMap : NSObject
{
    NSMutableArray *_priorities;	// 8 = 0x8
    NSMutableDictionary *_prioritiesToIndexes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000040004
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000003ffee
- (_Bool)contains:(id)arg1;	// IMP=0x000000000003ffb7
- (_Bool)containsPriority:(double)arg1;	// IMP=0x000000000003ff48
- (double)priorityOfIndex:(unsigned long long)arg1;	// IMP=0x000000000003fecb
- (long long)indexOfPriority:(double)arg1;	// IMP=0x000000000003fe3b
- (id)nextPriorityFromPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000003fd53
- (void)appendRemainingPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000003fbc7
- (void)insertPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000003f985
- (_Bool)addPriorities:(id)arg1;	// IMP=0x000000000003f6d9
- (id)initWithPriorities:(id)arg1;	// IMP=0x000000000003f638
- (id)init;	// IMP=0x000000000003f624

@end

