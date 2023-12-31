//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol KVSkitReadAccess;

@interface KVSkitReaderFactory : NSObject
{
    NSObject<KVSkitReadAccess> *_cachedLocalReader;	// 8 = 0x8
    NSMutableDictionary *_cachedRemoteReaders;	// 16 = 0x10
}

+ (id)_rootDirectoryURL;	// IMP=0x0010000000020559
- (void).cxx_destruct;	// IMP=0x0000000000020531
- (_Bool)setItems:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000020451
- (_Bool)supportsMultiUser;	// IMP=0x0000000000020449
- (id)_provideAccess:(id)arg1 forUser:(id)arg2;	// IMP=0x0000000000020245
- (id)accessReadOnlySkitForUser:(id)arg1;	// IMP=0x0000000000020147
- (id)init;	// IMP=0x00000000000200c2

@end

