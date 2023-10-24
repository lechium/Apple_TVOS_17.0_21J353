//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRRapportTransportConfiguration : NSObject
{
    NSString *_deviceUID;	// 8 = 0x8
    NSString *_sessionUID;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000165e3
- (void).cxx_destruct;	// IMP=0x000000000001680d
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *sessionUID; // @synthesize sessionUID=_sessionUID;
@property(retain, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
- (id)description;	// IMP=0x0000000000016774
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016658
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000165eb

@end
