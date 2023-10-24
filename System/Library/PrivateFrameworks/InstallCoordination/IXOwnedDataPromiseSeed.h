//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface IXOwnedDataPromiseSeed
{
    NSURL *_stagingBaseDir;	// 8 = 0x8
    NSString *_sandboxExtensionToken;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002b35d
- (void).cxx_destruct;	// IMP=0x000000000002b46e
@property(copy, nonatomic) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain, nonatomic) NSURL *stagingBaseDir; // @synthesize stagingBaseDir=_stagingBaseDir;
- (Class)clientPromiseClass;	// IMP=0x000000000002b416
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b365
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b289
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b19a

@end
