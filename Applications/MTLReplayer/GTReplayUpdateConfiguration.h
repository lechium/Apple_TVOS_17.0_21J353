//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTReplayConfiguration;

@interface GTReplayUpdateConfiguration
{
    GTReplayConfiguration *_configuration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000499e
- (void).cxx_destruct;	// IMP=0x0020000000004aeb
@property(retain, nonatomic) GTReplayConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004a49
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000049a6

@end
