//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIGestureGraphElement : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000821a10
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000008219f4
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000008219e2
- (id)description;	// IMP=0x0000000000821685
- (void)setProperties:(id)arg1;	// IMP=0x000000000082163d
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000008215e6
- (void)removeAllProperties;	// IMP=0x00000000008215d0
- (void)removePropertyForKey:(id)arg1;	// IMP=0x00000000008215ba
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000008215a4
- (_Bool)hasProperties:(id)arg1;	// IMP=0x000000000082143a
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000821424
- (id)initWithLabel:(id)arg1;	// IMP=0x0000000000821346

@end

