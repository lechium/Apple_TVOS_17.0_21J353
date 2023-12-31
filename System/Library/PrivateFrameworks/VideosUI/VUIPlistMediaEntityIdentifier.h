//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntityIdentifier : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    VUIMediaEntityType *_mediaEntityType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000023b8d
@property(copy, nonatomic) VUIMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000238eb
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002389c
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000023747
- (id)init;	// IMP=0x00000000000236d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

