//
//  KeyClass.h
//  iRSA
//
//  Created by Jan Galler on 16.01.11.
//  Copyright 2011 PQ-Developing.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface KeyGenerate : NSObject {
	
}

-(void)generatePublicAndPrivateRSAKey;
-(NSDictionary *)generateKeysBySSCrypto;

@end
