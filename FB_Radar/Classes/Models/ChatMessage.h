//
//  ChatMessage.h
//  Chattar
//
//  Created by IgorKh on 8/2/12.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ChatMessage : NSManagedObject

@property (nonatomic, retain) id body;

@end