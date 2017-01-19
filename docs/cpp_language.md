Страница в разработке.

## Что такое язык программирования
ЯП - способ объяснить машине, что вы от нее хотите. 
ЯП - способ записи алгоритма, т.е. последовательность действий машины, которые вы хотите выполнить.
Машина делает не то, что вы хотите, а то, что записали с помощью ЯП.
ЯП очень много. Какие-то ЯП хороши в одних задачах, но неудобны в других, какие-то ЯП заточены только под конкретную задачу, а есть ЯП "универсальные", которые можно применять для любой задачи с тем или иным успехом.

## Семейство языков программирования С
Язык Си был разработан как более высокоуровная альтернатива машинному языку Ассемблер. и должен был быть более функциональным и удобным для программиста, но сохранить высокую производительность и мощность Ассемблер.

У этого есть свои плюсы: программы на С одни из самых эффективных в плане быстродействия и расходования памяти (при условии, что у программиста руки и голова растут из правильного места). Но есть и минусы, перекочевавшие из Ассемблера: на программисте лежит большая ответственность на то, что творится в его коде, потому что неправильные действия программиста могут иметь страшные итоги для программы. 

Брайан Керниган, соавтор руководства по языку С, любил говорить: "С — инструмент, острый, как бритва: с его помощью можно создать и элегантную программу, и кровавое месиво".

## Сфера применения языка С
Именно поэтому языки семейства С занимают прочную нишу в компьютерном мире: на них все еще пишут высокопроизводительные и сильно нагруженные части приложений, приложения отвечающие за прямую работу с памятью или железом. Однако С в сравнении с другими современными ЯП сильно проигрывает в скорости разработки на нем, он вынуждает программиста много думать головой самостоятельно, а не надеяться на помощь самого компилятора (многие ЯП просто не позволят вам выстрелить себе в ногу, отобрав ружье, С же еще и поможет вам нажать на курок) и знать очень много процессов, которые происходят "под капотом".

Однако тем не менее С нашел свою уникальную сферу применения, которую в ближайшее время уступать не намерен.

## Основные отличия языка С++ от языка С
В определенный момент развития парадигм программирования, когда появилась парадигма объектно-ориентированного программирования, встал вопрос о развитии языка С. Но ООП подход избыточен для таких сфер применения С как программирование "железа". Поэтому был создан отдельный ЯП на основе С, но который поддерживал ООП подход - язык С++.

Область его применения включает создание операционных систем, разнообразных прикладных программ, драйверов устройств, приложений для встраиваемых систем, высокопроизводительных серверов, а также развлекательных приложений (игр). 

С++ в данный момент активно развивается. Помимо ООП методик, которые появились при его создании, этот язык старается впитывать себя многие современные тенденции ЯП, которые с каждым годом все множатся. Последним на момент написания страницы является стандарт С++11.

С и С++ живы и жить будут. Многие ЯП при создании брали эти языки за основу (или по крайней мере самое лучшее из них, отбрасывая отрицательные стороны).