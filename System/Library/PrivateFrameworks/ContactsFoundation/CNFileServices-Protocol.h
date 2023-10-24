//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol CNFileServices <NSObject>
- (NSURL *)secureTemporarySubdirectoryWithName:(NSString *)arg1;
- (NSURL *)secureTemporaryDirectory;
- (NSString *)NSTemporaryDirectory;
- (int)fcntl_flock:(int)arg1:(int)arg2:(struct flock *)arg3;
- (int)flock:(int)arg1:(int)arg2;
- (int)fstatfs:(int)arg1:(struct statfs *)arg2;
- (int)statfs:(const char *)arg1:(struct statfs *)arg2;
- (int)close:(int)arg1;
- (int)open:(const char *)arg1:(int)arg2:(unsigned short)arg3;
- (int)errnoValue;
@end
