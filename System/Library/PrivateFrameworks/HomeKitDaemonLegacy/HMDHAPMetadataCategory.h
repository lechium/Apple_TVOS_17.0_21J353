//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPMetadataCategory : HMFObject
{
    NSNumber *_identifier;	// 8 = 0x8
    NSString *_uuidStr;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_catDescription;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000211faa
@property(retain, nonatomic) NSString *catDescription; // @synthesize catDescription=_catDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4;	// IMP=0x0000000000211ce2
- (id)init;	// IMP=0x0000000000211c3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

