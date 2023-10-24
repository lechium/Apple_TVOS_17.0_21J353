//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface ASCDescriber : NSObject
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

+ (id)nilObject;	// IMP=0x0040000000016236
- (void).cxx_destruct;	// IMP=0x0000000000016e87
@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <NSObject> object; // @synthesize object=_object;
- (id)description;	// IMP=0x0000000000016d5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016bbc
- (unsigned long long)hash;	// IMP=0x0000000000016b0a
- (id)finalizeDescription;	// IMP=0x0000000000016a4b
- (id)describeProperties;	// IMP=0x00000000000167bd
- (id)describeObject;	// IMP=0x00000000000166fd
- (void)addObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001660f
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;	// IMP=0x00000000000165ab
- (void)addDouble:(double)arg1 withName:(id)arg2;	// IMP=0x0000000000016526
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x00000000000164a7
- (void)addInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x0000000000016428
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x00000000000163a9
- (void)addInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x000000000001632a
- (void)addBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x00000000000162c8
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000016243

@end

