//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol StreamWriter
@property(readonly) _Bool hasSpaceAvailable;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (void)expectedContentLength:(unsigned long long)arg1;
@end

