//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface RMPersistentActiveIdentifiers : NSObject
{
    NSDictionary *_uniqueIdentifiersByConfigurationType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000065d72
- (void).cxx_destruct;	// IMP=0x0020000000065f67
@property(retain, nonatomic) NSDictionary *uniqueIdentifiersByConfigurationType; // @synthesize uniqueIdentifiersByConfigurationType=_uniqueIdentifiersByConfigurationType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000065edc
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000065d7a
- (id)initWithUniqueIdentifiersByConfigurationType:(id)arg1;	// IMP=0x0010000000065cff
- (id)initWithConfigurationPayloads:(id)arg1;	// IMP=0x00100000000658ca

@end
