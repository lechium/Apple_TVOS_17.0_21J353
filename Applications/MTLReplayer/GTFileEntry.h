//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTFileEntry : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSString *_destination;	// 16 = 0x10
    unsigned long long _fileSize;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000f973
- (void).cxx_destruct;	// IMP=0x002000000000fd1d
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)description;	// IMP=0x001000000000fc22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000fb9d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000faa7
- (id)initWithLink:(id)arg1 destination:(id)arg2;	// IMP=0x001000000000fa06
- (id)initWithPath:(id)arg1 fileSize:(unsigned long long)arg2;	// IMP=0x001000000000f97b

@end
