//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSThreadSafeObject, NSArray;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    AMSThreadSafeObject *_backingSet;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000396cb8
@property(retain, nonatomic) AMSThreadSafeObject *backingSet; // @synthesize backingSet=_backingSet;
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000396b5c
- (void)removeObject:(id)arg1;	// IMP=0x0000000000396a6b
- (void)addObject:(id)arg1;	// IMP=0x000000000039697a
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)init;	// IMP=0x000000000039668d

@end

