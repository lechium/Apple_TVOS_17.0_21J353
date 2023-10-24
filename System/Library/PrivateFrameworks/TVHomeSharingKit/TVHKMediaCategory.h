//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaCategory : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_typeString;	// 16 = 0x10
    NSSet *_supportedMediaItemTypes;	// 24 = 0x18
    NSSet *_supportedMediaEntityCollectionTypes;	// 32 = 0x20
    NSDictionary *_supportedChildMediaEntityCollectionTypes;	// 40 = 0x28
}

+ (id)new;	// IMP=0x00600000000b1f47
+ (id)mediaCatgeoryForType:(unsigned long long)arg1;	// IMP=0x00600000000b142d
- (void).cxx_destruct;	// IMP=0x00000000000b245f
@property(copy, nonatomic) NSDictionary *supportedChildMediaEntityCollectionTypes; // @synthesize supportedChildMediaEntityCollectionTypes=_supportedChildMediaEntityCollectionTypes;
@property(copy, nonatomic) NSSet *supportedMediaEntityCollectionTypes; // @synthesize supportedMediaEntityCollectionTypes=_supportedMediaEntityCollectionTypes;
@property(copy, nonatomic) NSSet *supportedMediaItemTypes; // @synthesize supportedMediaItemTypes=_supportedMediaItemTypes;
@property(copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000000000b20d0
- (id)_initWithType:(unsigned long long)arg1 typeString:(id)arg2;	// IMP=0x00000000000b1fe5
- (id)init;	// IMP=0x00000000000b1f76

@end

