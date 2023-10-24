//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface IXDataPromiseSeed : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _creatorIdentifier;	// 16 = 0x10
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
    unsigned long long _totalBytesNeededOnDisk;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003db5b
- (void).cxx_destruct;	// IMP=0x002000000003dcae
@property(nonatomic) unsigned long long totalBytesNeededOnDisk; // @synthesize totalBytesNeededOnDisk=_totalBytesNeededOnDisk;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) unsigned long long creatorIdentifier; // @synthesize creatorIdentifier=_creatorIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003db63
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003da15
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003d8b2

@end

