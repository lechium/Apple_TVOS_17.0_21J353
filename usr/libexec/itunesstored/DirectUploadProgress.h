//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DirectUploadProgress : NSObject
{
    long long _countOfBytesExpectedToSend;	// 8 = 0x8
    long long _countOfBytesSent;	// 16 = 0x10
    long long _uploadDatabaseIdentifier;	// 24 = 0x18
}

@property(nonatomic) long long uploadDatabaseIdentifier; // @synthesize uploadDatabaseIdentifier=_uploadDatabaseIdentifier;
@property(nonatomic) long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property(nonatomic) long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018ec9d

@end

