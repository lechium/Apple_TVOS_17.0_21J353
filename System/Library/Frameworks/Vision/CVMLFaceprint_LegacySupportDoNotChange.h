//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject
{
    unsigned int _platform;	// 8 = 0x8
    unsigned int _profile;	// 12 = 0xc
    NSData *_faceprint;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    NSString *_faceprintInputPath;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001b7c00
- (void).cxx_destruct;	// IMP=0x00000000001b7bcd
@property(copy) NSString *faceprintInputPath; // @synthesize faceprintInputPath=_faceprintInputPath;
@property unsigned int profile; // @synthesize profile=_profile;
@property unsigned int platform; // @synthesize platform=_platform;
@property(copy) NSString *key; // @synthesize key=_key;
@property(retain) NSData *faceprint; // @synthesize faceprint=_faceprint;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b7b1e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b78c4

@end

