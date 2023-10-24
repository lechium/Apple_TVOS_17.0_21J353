//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UITraitStorage : NSObject
{
    NSMutableArray *_records;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    id _object;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000093ce3b
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)_propertyDescriptionString;	// IMP=0x000000000093cdb1
- (id)description;	// IMP=0x000000000093cd0f
- (void)applyRecordsMatchingTraitCollection:(id)arg1;	// IMP=0x000000000093cc95
- (void)addRecord:(id)arg1;	// IMP=0x000000000093cc7f
- (id)records;	// IMP=0x000000000093cc71
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000093cbd5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000093cae1
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;	// IMP=0x000000000093ca22

@end

