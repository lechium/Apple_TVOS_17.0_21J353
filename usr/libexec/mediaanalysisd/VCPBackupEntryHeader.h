//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPBackupEntryHeader : NSObject
{
    unsigned int _dataLength;	// 8 = 0x8
    _Bool _isCompressed;	// 12 = 0xc
}

+ (id)header;	// IMP=0x0040000000076b84
@property(nonatomic) _Bool isCompressed; // @synthesize isCompressed=_isCompressed;
@property(nonatomic) unsigned int dataLength; // @synthesize dataLength=_dataLength;
- (int)writeToStream:(id)arg1;	// IMP=0x0010000000076be0
- (int)readFromStream:(id)arg1;	// IMP=0x0010000000076b9e

@end

