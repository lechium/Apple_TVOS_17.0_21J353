//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIAlertVisualStyleUpdatableConstraints : NSObject
{
    NSMutableDictionary *_constraintsByKey;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f8d9a1
- (id)constraintForKey:(id)arg1;	// IMP=0x0000000000f8d98b
- (void)addConstraint:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000f8d969
- (_Bool)hasUpdatableConstraints;	// IMP=0x0000000000f8d94c
- (id)init;	// IMP=0x0000000000f8d8e6

@end

